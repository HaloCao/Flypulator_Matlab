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
start = 9;
m_area = start/Ts:(16*1/Ts);
pid_plot = x_I(m_area);
ib_plot = x_I_IB(m_area);
ism_plot = x_I_ISM(m_area);

t = -1:Ts:(-1+Ts*(length(m_area)-1));

plot(t,pid_plot,'linewidth',factor*2,'Color',[0    0    0])
hold on;
plot(t,ib_plot,'linewidth',factor*2,'Color',[0.9290    0.6940    0.1250])
plot(t,ism_plot,'linewidth',factor*2,'Color',[0.4940    0.1840    0.5560])
legend({'PID','IB','ISM'},'Location','SouthEast','Interpreter','latex');
xlabel('$t$ [s]');
ylabel('${^I\!}x-{^I\!}x_d$ [cm]');
set(findall(gcf,'-property','FontSize'),'FontSize',11)
%ylim([-0.05,1.1])
%yticks([0 0.25 0.5 0.75 1])
xlim([-0.25,6])
xticks([0 1 2 3 4 5])
grid on;
maxis = gca;
maxis.YAxis.Exponent = -2;
Plot2LaTeX(gcf,'TexFigures/xyz')
%print('../../Thesis/figures/VOCase_comp_x_trajerror.eps','-depsc2')

figure('Units','centimeters',...
'Position',[10 10 width height],...
'PaperPositionMode','auto');

pid_plot2 = yaw(m_area);
ib_plot2 = yaw_IB(m_area);
ism_plot2 = yaw_ISM(m_area);
%wrap angle
for it=1:length(pid_plot2)
    if pid_plot2(it) < -180
        pid_plot2(it) =  pid_plot2(it) +360;
    end
    if ib_plot2(it) < -180
        ib_plot2(it) =  ib_plot2(it) +360;
    end
    if ism_plot2(it) < -180
        ism_plot2(it) =  ism_plot2(it) +360;
    end
     if pid_plot2(it) > 180
        pid_plot2(it) =  pid_plot2(it) -360;
    end
    if ib_plot2(it) > 180
        ib_plot2(it) =  ib_plot2(it) -360;
    end
    if ism_plot2(it) > 180
        ism_plot2(it) =  ism_plot2(it) -360;
    end
end
plot(t,pid_plot2,'linewidth',factor*2,'Color',[0    0    0])
hold on;
plot(t,ib_plot2,'linewidth',factor*2,'Color',[0.9290    0.6940    0.1250])
plot(t,ism_plot2,'linewidth',factor*2,'Color',[0.4940    0.1840    0.5560])
legend({'PID','IB','ISM'},'Location','SouthEast','Interpreter','latex');
xlabel('$t$ [s]');
ylabel('$\psi-\psi_d$ [$^\circ$]');
set(findall(gcf,'-property','FontSize'),'FontSize',11)
%ylim([0,1.75])
xlim([-0.25,6])
%yticks([-180 -90 0 90 180])
xticks([0 1 2 3 4 5])
grid on;
Plot2LaTeX(gcf,'TexFigures/rpy')
%print('../../Thesis/figures/VOCase_comp_yaw_trajerror.eps','-depsc2')

