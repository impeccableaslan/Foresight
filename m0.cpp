#include "m0.h"
#include "m0_settings.h"
#include <iostream>
/*
state0::state0() : state_predict() {
}

MatrixXd state0::predict_sigma(const MatrixXd& augmented_sigma, double dt) {

	MatrixXd predicted_sigma = MatrixXd(NX, _NSIGMA);

	for (int c = 0; c < _NSIGMA; ++c) {
		/*
			1. Get the current state
		
		const double px = augmented_sigma(0, c);
		const double py = augmented_sigma(1, c);
		const double pz = augmented_sigma(2, c);

		const double vx = augmented_sigma(3, c);
		const double vy = augmented_sigma(4, c);
		const double vz = augmented_sigma(5, c);

		const double ax = augmented_sigma(6, c);
		const double ay = augmented_sigma(7, c);
		const double az = augmented_sigma(8, c);

		const double yaw = augmented_sigma(9, c);
		const double pitch = augmented_sigma(10, c);
		const double roll = augmented_sigma(11, c);

		const double ax_noise = augmented_sigma(12, c);
		const double ay_noise = augmented_sigma(13, c);
		const double az_noise = augmented_sigma(14, c);

		const double pyaw_noise = augmented_sigma(15, c);
		const double ppitch_noise = augmented_sigma(16, c);
		const double proll_noise = augmented_sigma(17, c);

		/*
			2. Predict next state with noise
		
		double dt2 = dt * dt;

		predicted_sigma(0, c) = px + vx * dt + 0.5 * ax * dt2;
		predicted_sigma(1, c) = py + vy * dt + 0.5 * ay * dt2;
		predicted_sigma(2, c) = pz + vz * dt + 0.5 * az * dt2;

		predicted_sigma(3, c) = vx + ax * dt;
		predicted_sigma(4, c) = vy + ay * dt;
		predicted_sigma(5, c) = vz + az * dt;

		predicted_sigma(6, c) = ax + ax_noise;
		predicted_sigma(7, c) = ay + ay_noise;
		predicted_sigma(8, c) = az + az_noise;

		predicted_sigma(9, c) = yaw + pyaw_noise;
		predicted_sigma(10, c) = pitch + ppitch_noise;
		predicted_sigma(11, c) = roll + proll_noise;
	}

	return predicted_sigma;
}

ukf0::ukf0(ALL_DATA, double t, bool debug) : ukf() {
	using namespace m0_sets;
	using namespace std;
	vector<double> noises{ VAR_AX_NOISE, VAR_AY_NOISE, VAR_AZ_NOISE, VAR_PYAW_NOISE, VAR_PPITCH_NOISE, VAR_PROLL_NOISE };
	_P = MatrixXd::Identity(NX, NX) * 0.01;

	initialize(DATA, t, NSIGMA, NAUG, W, W0_m, W0_c, noises, SCALE, VAR, debug);
}

state_predict& ukf0::get_stater() {
	return _stater0;
}
*/