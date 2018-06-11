 %plot x_I,y_I,z_I and roll,pitch,yaw
% simulate 20s
% Ts = 0.004
% disturbance at 10s

M = csvread('position_data_diststep_new_xyz10.csv',1,0);
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
z_I = z - 1;
roll = roll*180/pi;
pitch = pitch*180/pi;
yaw = yaw*180/pi;
Ts = 0.001;

% choose region
start = 29.4;
m_area = (ceil(start/Ts)+1):(ceil(36*1/Ts)+1);
x_plot = x_I(m_area);
y_plot = y_I(m_area);
z_plot = z_I(m_area);

t = -1:Ts:(-1+Ts*(length(m_area)-1));

plot(t,x_plot,'linewidth',factor*2,'Color', [0.8500    0.3250    0.0980])
hold on;
plot(t,y_plot,'linewidth',factor*2,'Color',[0.4660    0.6740    0.1880])
plot(t,z_plot,'linewidth',factor*2,'Color',[0    0.4470    0.7410])
legend({'${^I\!}x$','${^I\!}y$','${^I\!}z$'},'Location','Southeast','Interpreter','latex');
xlabel('$t$ [s]');
ylabel('[m]');
set(findall(gcf,'-property','FontSize'),'FontSize',11)
ylim([-0.075,0.225])
yticks([-0.05 0 0.05 0.1 0.15 0.2])
xlim([-0.25, 5.5])
xticks([0 1 2 3 4 5 ])
grid on;
%Plot2LaTeX(gcf,'../TexFigures/xyz')
%print('../../Thesis/figures/IdealCase_xyz_ref.eps','-depsc2')

figure('Units','centimeters',...
'Position',[10 10 width height],...
'PaperPositionMode','auto');

M = csvread('position_data_diststep_new_rpy2.csv',1,0);
t = M(:,1);
x = M(:,2);
y = M(:,3);
z = M(:,4);
roll = M(:,5);
pitch = M(:,6);
yaw = M(:,7);

% squeeze singleton dimensions
x_I = x;
y_I = y;
z_I = z - 1;
roll = roll*180/pi;
pitch = pitch*180/pi;
yaw = yaw*180/pi;
Ts = 0.001;

% choose region
start = 14.9;
m_area = (ceil(start/Ts)+1):(ceil(28*1/Ts)+1);
x_plot = x_I(m_area);
y_plot = y_I(m_area);
z_plot = z_I(m_area);

t = -1:Ts:(-1+Ts*(length(m_area)-1));

roll_plot = roll(m_area);
pitch_plot = pitch(m_area);
yaw_plot = yaw(m_area);
plot(t,roll_plot,'linewidth',factor*2,'Color', [0.8500    0.3250    0.0980])
hold on;
plot(t,pitch_plot,'linewidth',factor*2,'Color',[0.4660    0.6740    0.1880])
plot(t,yaw_plot,'linewidth',factor*2,'Color',[0    0.4470    0.7410])
legend({'$\varphi$','$\theta$','$\psi$'},'Location','Southeast','Interpreter','latex');
xlabel('$t$ [s]');
ylabel('$[^\circ]$');
set(findall(gcf,'-property','FontSize'),'FontSize',11)
ylim([-5,32])
xlim([-0.25,7.5])
%yticks([0 2.5 5 7.5 10 12.5])
xticks([0 1 2 3 4 5 6 7])
grid on;
Plot2LaTeX(gcf,'../TexFigures/rpy')
%print('../../Thesis/figures/IdealCase_rpy_ref.eps','-depsc2')