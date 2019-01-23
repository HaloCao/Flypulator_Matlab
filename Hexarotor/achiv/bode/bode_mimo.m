% H = bodeplot(HexrotorDyMo_esti_error);
% % setoptions(h,'PhaseVisible','off','FreqUnits','Hz','InputVisible',{'on' 'off'},...
% %      'OutputVisible',{'off' 'on' 'off'}, 'Grid','on', 'XLimMode', 'manual',...
% %      'XLim', [10^0 10^4]);
% H.InputName = 'Control';
% H.OutputName = 'Temperature';
% [mag,phase,w] = bode(H);
% size(mag)
% h = bodeplot(HexrotorDyMo_esti_error);
% setoptions(h,'PhaseVisible','off','FreqUnits','Hz','InputVisible',{'on' 'off'},...
%      'OutputVisible',{'off' 'on' 'off'}, 'Grid','on', 'XLimMode', 'manual',...
%      'XLim', [10^0 10^4]);
%load HexrotorDyMo_esti_error.mdl;
x=input.signals.values(5000:end , 1);
y=ScopeDataxideal.signals.values(1,5000:end).';
% txy = tfestimate(x,y);
% [num,den] = tfdata(txy) 
 fs = 3140;
 tfestimate(x,y,[],[],[],fs)
%bode(txy)
