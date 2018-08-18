% plot x_I,y_I,z_I and roll,pitch,yaw
% simulate 20s
% Ts = 0.004
% disturbance at 10s

%prepare plot
factor = 0.5;
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
start = 0;
m_area = 1+start/Ts:(12*1/Ts);
pid_plot = x_I(m_area);
ib_plot = x_I_IB(m_area);
ism_plot = x_I_ISM(m_area);

t = -1:Ts:(-1+Ts*(length(m_area)-1));

plot(t,pid_plot,'linewidth',factor*2,'Color',[0    0    0])
hold on;
plot(t,ib_plot,'linewidth',factor*2,'Color',[0.9290    0.6940    0.1250])
plot(t,ism_plot,'linewidth',factor*2,'Color',[0.4940    0.1840    0.5560])
legend({'PID','IB','ISM'},'Location','NorthEast','Interpreter','latex');
xlabel('$t$ [s]');
ylabel('${^I\!}x$ [m]');
set(findall(gcf,'-property','FontSize'),'FontSize',11)
ylim([-0.1;0.5])
%yticks([0 0.2 0.4 0.6 0.8 1])
xticks([0 2 4 6 8 10])
xlim([-0.5,10.5])
grid on;
maxis = gca;
%maxis.YAxis.Exponent = -2;
Plot2LaTeX(gcf,'TexFigures/xyz')
%print('../../Thesis/figures/VOCase_comp_x_dist.eps','-depsc2')

figure('Units','centimeters',...
'Position',[10 10 width height],...
'PaperPositionMode','auto');

pid_plot2 = roll(m_area);
ib_plot2 = roll_IB(m_area);
ism_plot2 = roll_ISM(m_area);
plot(t,pid_plot2,'linewidth',factor*2,'Color',[0    0    0])
hold on;
plot(t,ib_plot2,'linewidth',factor*2,'Color',[0.9290    0.6940    0.1250])
plot(t,ism_plot2,'linewidth',factor*2,'Color',[0.4940    0.1840    0.5560])
legend({'PID','IB','ISM'},'Location','NorthEast','Interpreter','latex');
xlabel('$t$ [s]');
ylabel('$\varphi$ [$^\circ$]');
set(findall(gcf,'-property','FontSize'),'FontSize',11)
%ylim([-0.05,1.1])
%yticks([0 0.2 0.4 0.6 0.8 1])
xlim([-0.5,10.5])
xticks([0 2 4 6 8 10])
grid on;
Plot2LaTeX(gcf,'TexFigures/rpy')
%print('../../Thesis/figures/VOCase_comp_roll_dist.eps','-depsc2')

