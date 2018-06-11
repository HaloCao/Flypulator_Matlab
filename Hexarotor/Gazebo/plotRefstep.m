 %plot x_I,y_I,z_I and roll,pitch,yaw
% simulate 20s
% Ts = 0.004
% disturbance at 10s

M = csvread('position_data_refstep_xyzrp.csv',1,0);
t = M(:,1);
x = M(:,2);
y = M(:,3);
z = M(:,4);
roll = M(:,5);
pitch = M(:,6);
yaw = M(:,7);

%prepare plot
factor = 0.45;
width = factor*16;
height = 0.75*width;
figure('Units','centimeters',...
'Position',[10 10 width height],...
'PaperPositionMode','auto');

% squeeze singleton dimensions
x_I = x;
y_I = y;
z_I = z - 0.23;
roll = roll*180/pi;
pitch = pitch*180/pi;
yaw = yaw*180/pi;
Ts = 0.001;

% choose region
start = 11.4;
m_area = (ceil(start/Ts)+1):(ceil(18*1/Ts)+1);
x_plot = x_I(m_area);
y_plot = y_I(m_area);
z_plot = z_I(m_area);

t = -1:Ts:(-1+Ts*(length(m_area)-1));



plot(t,x_plot,'linewidth',factor*2,'Color', [0.8500    0.3250    0.0980])
hold on;
plot(t,y_plot,'linewidth',factor*2, 'Color',[0.4660    0.6740    0.1880])
plot(t,z_plot,'linewidth',factor*2,'Color',[0    0.4470    0.7410])
x_ref = (t<0)*0 + (t>0)*0.5;
y_ref = (t<0)*0 + (t>0)*0.75;
z_ref = (t<0)*0 + (t>0)*1;
plot(t,x_ref,'-.','linewidth',factor*2,'Color', [0.8500    0.3250    0.0980])
plot(t,y_ref,'-.','linewidth',factor*2, 'Color',[0.4660    0.6740    0.1880])
plot(t,z_ref,'-.','linewidth',factor*2,'Color',[0    0.4470    0.7410])

legend({'$x$','$y$','$z$'},'Location','Southeast','Interpreter','latex');
xlabel('$t$ [s]');
ylabel('[m]');
set(findall(gcf,'-property','FontSize'),'FontSize',11)
ylim([-0.05,1.3])
yticks([0 0.25 0.5 0.75 1 1.25])
xlim([-0.25,5.5])
xticks([0 1 2 3 4 5])
grid on;
%legend({'$x$','$y$','$z$'},'Location','Southeast','Interpreter','latex');
Plot2LaTeX(gcf,'../TexFigures/xyz')
%print('../../../Thesis/figures/IdealCase_xyz_ref.eps','-depsc2')

figure('Units','centimeters',...
'Position',[10 10 width height],...
'PaperPositionMode','auto');

roll_plot = roll(m_area);
pitch_plot = pitch(m_area);
yaw_plot = yaw(m_area);
plot(t,roll_plot,'linewidth',factor*2,'Color', [0.8500    0.3250    0.0980])
hold on;
plot(t,pitch_plot,'linewidth',factor*2, 'Color',[0.4660    0.6740    0.1880])
plot(t,yaw_plot,'linewidth',factor*2,'Color',[0    0.4470    0.7410])
x_ref = (t<0)*0 + (t>0)*10;
y_ref = (t<0)*0 + (t>0)*7.5;
z_ref = (t<0)*0 + (t>0)*0;
plot(t,x_ref,'-.','linewidth',factor*2,'Color', [0.8500    0.3250    0.0980])
plot(t,y_ref,'-.','linewidth',factor*2, 'Color',[0.4660    0.6740    0.1880])
plot(t,z_ref,'-.','linewidth',factor*2,'Color',[0    0.4470    0.7410])

legend({'$\varphi$','$\theta$','$\psi$'},'Location','Southeast','Interpreter','latex');
xlabel('$t$ [s]');
ylabel('$[^\circ]$');
set(findall(gcf,'-property','FontSize'),'FontSize',11)
ylim([-3,13])
xlim([-0.25,5.5])
yticks([-2.5 0 2.5 5 7.5 10 12.5])
xticks([0 1 2 3 4 5])
grid on;
Plot2LaTeX(gcf,'../TexFigures/rpy')
%print('../../../Thesis/figures/IdealCase_rpy_ref.eps','-depsc2')