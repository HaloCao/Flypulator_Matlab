

t = -10:0.01:10;

f1 = 2/pi*atan(t);
f2 = sign(t);


%prepare plot
factor = 0.7;
width = factor*16;
height = 0.6*width;
figure('Units','centimeters',...
'Position',[10 10 width height],...
'PaperPositionMode','auto');

plot(t,f2,'linewidth',factor*2)
hold on;
plot(t,f1,'linewidth',factor*2)

grid on;

ylim([-1.1;1.1])
xlabel('x')
ylabel('y')
legend({'$y=$sign$(x)$','$y = \frac{2}{\pi}\arctan(x)$'},'interpreter','tex','Location','Southeast')

set(findall(gcf,'-property','FontSize'),'FontSize',11)
Plot2LaTeX(gcf,'TexFigures/atan')