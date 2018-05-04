% plot x_I,y_I,z_I and roll,pitch,yaw
% simulate 20s
% Ts = 0.004
% disturbance at 10s

%prepare plot
factor = 0.45;
width = factor*16;
height = 0.75*width;
figure('Units','centimeters',...
'Position',[10 10 width height],...
'PaperPositionMode','auto');

% squeeze singleton dimensions
x_I = squeeze(x_I);
y_I = squeeze(y_I);
z_I = squeeze(z_I);
roll = squeeze(roll);
pitch = squeeze(pitch);
yaw = squeeze(yaw);

x_I_IB = squeeze(x_I_IB);
y_I_IB = squeeze(y_I_IB);
z_I_IB = squeeze(z_I_IB);
roll_IB = squeeze(roll_IB);
pitch_IB = squeeze(pitch_IB);
yaw_IB = squeeze(yaw_IB);

x_I_ISM = squeeze(x_I_ISM);
y_I_ISM = squeeze(y_I_ISM);
z_I_ISM = squeeze(z_I_ISM);
roll_ISM = squeeze(roll_ISM);
pitch_ISM = squeeze(pitch_ISM);
yaw_ISM = squeeze(yaw_ISM);

% choose region
start = 10;
m_area = ceil(start/Ts)+1:(15*1/Ts);
pid_plot = x_I(m_area);
ib_plot = x_I_IB(m_area);
ism_plot = x_I_ISM(m_area);

t = 0:Ts:(Ts*(length(m_area)-1));
%t = 0:0.1:5;
x = 1/5*t;
plot(t,pid_plot,'linewidth',factor*2)
%plot(t,x,'linewidth',factor*2)
hold on;
%plot(t,ib_plot,'linewidth',factor*2,'Color',[0.9290    0.6940    0.1250])
%plot(t,ism_plot,'linewidth',factor*2,'Color',[0.4940    0.1840    0.5560])
%legend({'PID','IB','ISM'},'Location','SouthEast','Interpreter','latex');
xlabel('$t$');
ylabel('$\varphi(t)$');
set(findall(gcf,'-property','FontSize'),'FontSize',11)
ylim([-0.05,1.05])
yticks([0 1])
xlim([-0.25,5.25])
xticks([0 5])
grid on;
Plot2LaTeX(gcf,'TexFigures/xyz')
%print('../../Thesis/figures/TrajectoryPoly.eps','-depsc2')