#include "myslam/map.h"

namespace myslam
{

void Map::insertMapPoint(MapPoint::Ptr map_point)
{	
	if (map_points.find(map_point->id_) == map_points.end())
	{
		map_points.insert(make_pair(map_point->id_, map_point));
	}
	else 
	{
		map_points[map_point->id_] = map_point;
	}

}

void Map::insertKeyFrame(Frame::Ptr frame)
{
	cout<<"Key frame size = "<<keyframes_.size()<<endl;
	if (keyframes_.find(frame->id_) == keyframes_.end())
	{
		keyframes_.insert(make_pair(frame->id_, frame));
	}
	else 
	{
		keyframes_[frame->id_] = frame;
	}

}

}