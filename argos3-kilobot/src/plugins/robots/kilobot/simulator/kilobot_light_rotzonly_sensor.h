/**
 * @file <argos3/plugins/robots/kilobot/simulator/kilobot_light_rotzonly_sensor.h>
 *
 * @author Carlo Pinciroli - <ilpincy@gmail.com>
 * @author Vito Trianni - <vito.trianni@istc.cnr.it>
 */

#ifndef KILOBOT_LIGHT_ROTZONLY_SENSOR_H
#define KILOBOT_LIGHT_ROTZONLY_SENSOR_H

#include <string>
#include <map>

// SCIoI Edition
// #include<opencv2/opencv.hpp>
// #include <opencv2/imgcodecs.hpp>

namespace argos {
   class CKilobotLightRotZOnlySensor;
   class CLightSensorEquippedEntity;
}

#include <argos3/plugins/robots/kilobot/control_interface/ci_kilobot_light_sensor.h>
#include <argos3/core/utility/math/range.h>
#include <argos3/core/utility/math/rng.h>
#include <argos3/core/simulator/space/space.h>
#include <argos3/core/simulator/sensor.h>

// using namespace cv;

namespace argos {

   class CKilobotLightRotZOnlySensor : public CSimulatedSensor,
                                       public CCI_KilobotLightSensor {

   public:

      CKilobotLightRotZOnlySensor();

      virtual ~CKilobotLightRotZOnlySensor() {}

      virtual void SetRobot(CComposableEntity& c_entity);

      virtual void Init(TConfigurationNode& t_tree);

      virtual void Update();

      virtual void Reset();

   protected:

      /** Reference to embodied entity associated to this sensor */
      CEmbodiedEntity* m_pcEmbodiedEntity;

      /** Reference to light sensor equipped entity associated to this sensor */
      CLightSensorEquippedEntity* m_pcLightEntity;

      /** Reference to controllable entity associated to this sensor */
      CControllableEntity* m_pcControllableEntity;

      /** Flag to show rays in the simulator */
      bool m_bShowRays;

      /** Random number generator */
      CRandom::CRNG* m_pcRNG;

      /** Whether to add noise or not */
      bool m_bAddNoise;

      /** Noise range */
      CRange<Real> m_cNoiseRange;

      /** Reference to the space */
      CSpace& m_cSpace;

      // Mat arena_img;
   };

}

#endif
