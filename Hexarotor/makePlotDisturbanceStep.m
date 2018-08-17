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

% choose region
start = 9;
m_area = (start/Ts):(20.5*1/Ts);
x_plot = x_I(m_area);
y_plot = y_I(m_area);
z_plot = z_I(m_area);

t = -1:Ts:(-1+Ts*(length(m_area)-1));

plot(t,x_plot.*100,'linewidth',factor*2,'Color', [0.8500    0.3250    0.0980])
hold on;
plot(t,y_plot.*100,'linewidth',factor*2,'Color',[0.4660    0.6740    0.1880])
plot(t,z_plot.*100,'linewidth',factor*2,'Color',[0    0.4470    0.7410])
% plot(t,(x_plot-min(x_plot))./(max(x_plot)-min(x_plot)),'linewidth',factor*2,'Color', [0.8500    0.3250    0.0980])
% hold on;
% plot(t,(y_plot-min(y_plot))./(max(y_plot)-min(y_plot)),'linewidth',factor*2,'Color',[0.4660    0.6740    0.1880])
% plot(t,(z_plot-min(z_plot))./(max(z_plot)-min(z_plot)),'linewidth',factor*2,'Color',[0    0.4470    0.7410])
legend({'$x$','$y$','$z$'},'Location','NorthEast','Interpreter','latex');
xlabel('$t$ [s]');
ylabel('[cm]');
% ylabel('${^I\!}p$./max(${^I\!}p$)');
set(findall(gcf,'-property','FontSize'),'FontSize',11)
% ylim([-0.00035,0.0065])
xlim([-0.2,10])
% ylim([-0.05,1.1])
% yticks([0 0.2 0.4 0.6 0.8 1])
% xlim([-0.2,5])
grid on;
Plot2LaTeX(gcf,'TexFigures/xyz')
%print('../../Thesis/figures/IdealCase_xyz_dist.eps','-depsc2')

figure('Units','centimeters',...
'Position',[20 10 width height],...
'PaperPositionMode','auto');

roll_plot = roll(m_area);
pitch_plot = pitch(m_area);
yaw_plot = yaw(m_area);
plot(t,roll_plot,'linewidth',factor*2,'Color', [0.8500    0.3250    0.0980])
hold on;
plot(t,pitch_plot,'linewidth',factor*2,'Color',[0.4660    0.6740    0.1880])
plot(t,yaw_plot,'linewidth',factor*2,'Color',[0    0.4470    0.7410])
% plot(t,(roll_plot-min(roll_plot))./(max(roll_plot)-min(roll_plot)),'linewidth',factor*2,'Color', [0.8500    0.3250    0.0980])
% hold on;
% plot(t,(pitch_plot-min(pitch_plot))./(max(pitch_plot)-min(pitch_plot)),'linewidth',factor*2,'Color',[0.4660    0.6740    0.1880])
% plot(t,(yaw_plot-min(yaw_plot))./(max(yaw_plot)-min(yaw_plot)),'linewidth',factor*2,'Color',[0    0.4470    0.7410])
legend({'$\varphi$','$\theta$','$\psi$'},'Location','NorthEast','Interpreter','latex');
xlabel('$t$ [s]');
ylabel('$[^\circ]$');
% ylabel('$\varphi$/max($\varphi$)');
set(findall(gcf,'-property','FontSize'),'FontSize',11)
% ylim([-0.01,0.2])
% xlim([-0.2,2.5])
% ylim([-0.05,1.1])
% yticks([0 0.2 0.4 0.6 0.8 1])
xlim([-0.2 10])
grid on;
Plot2LaTeX(gcf,'TexFigures/rpy')
%print('../../Thesis/figures/IdealCase_rpy_dist.eps','-depsc2')

