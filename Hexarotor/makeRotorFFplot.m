% PT1 in Step_PT1
% FF in Step_FF1
% run simulation 

m_area = 226:(226+1.1/Ts);
x_pt1 = Step_PT1(m_area);
x_ff1 = Step_FF1(m_area);

t = -0.1:Ts:(Ts*(length(m_area)-1))-0.1;

factor = 0.7;
width = factor*16;
height = 0.75*width;
figure('Units','centimeters',...
'Position',[10 10 width height],...
'PaperPositionMode','auto');
plot(t,x_pt1,'linewidth',factor*2)
hold on;
plot(t,x_ff1,'linewidth',factor*2)
legend({'Without FF','With FF'},'Location','SouthEast');
xlabel('t [s]');
ylabel('y(t)');
ylim([-0.05,1.1])
xlim([-0.1,1.1])
grid on;
Plot2LaTeX(gcf,'TexFigures/rotor1')
set(findall(gcf,'-property','FontSize'),'FontSize',11)
print('../../Thesis/figures/rotor5.eps','-depsc2')

