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
m_area = ceil(start/Ts)+1:(16*1/Ts);
pid_plot = x_I(m_area);
ib_plot = x_I_IB(m_area);
ism_plot = x_I_ISM(m_area);

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

t = -1:Ts:(-1+Ts*(length(m_area)-1));

pid_mean = mean(abs(pid_plot))
ib_mean = mean(abs(ib_plot))
ism_mean = mean(abs(ism_plot))

pid_mean2 = mean(abs(pid_plot2))
ib_mean2 = mean(abs(ib_plot2))
ism_mean2 = mean(abs(ism_plot2))

pid_std = std(pid_plot)
ib_std = std(ib_plot)
ism_std = std(ism_plot)

pid_std2 = std(pid_plot2)
ib_std2 = std(ib_plot2)
ism_std2 = std(ism_plot2)