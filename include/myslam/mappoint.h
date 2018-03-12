#ifndef MAPPOINT_H
#define MAPPOINT_H

namespace myslam
{

class MapPoint
{
public:
	typedef std::shared_ptr<MapPoint> Ptr;
	unsigned long                     id_;
	Vector3d                          pos_;  // Position in world
	Vector3d                          norm_; // Normal of viewing direction 
	Mat                               descriptor_; // Descriptor for matching 
    int         observed_times_;    // being observed by feature matching algo.
    int         matched_times_;     // being an inliner in pose estimation

public: 
	MapPoint();
	MapPoint(long id, Vector3d position, Vector3d norm);

	//factory method
	static MapPoint::Ptr createMapPoint();
};

}
#endif //MAPPOINT_H