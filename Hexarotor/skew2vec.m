function v = skew2vec(M)
% get vector from skew symmetric matrix
v = [M(3,2); M(1,3); M(2,1)];