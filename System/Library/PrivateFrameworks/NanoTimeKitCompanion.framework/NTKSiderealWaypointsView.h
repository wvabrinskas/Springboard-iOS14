/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:49 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKitCore/UIView.h>

@class NSArray, UIView, NSMutableArray;

@interface NTKSiderealWaypointsView : UIView {

	NSArray* _waypoints;
	double _orbitDiameter;
	UIView* _orbitContainerView;
	double _waypointDiameter;
	UIView* _waypointContainerView;
	double _dialDiameter;
	UIView* _separatorLinesContainer;
	NSMutableArray* _separatorLines;

}
-(void)setWaypoints:(id)arg1 ;
-(id)_newWaypointView;
-(void)_updateSeparatorLines;
-(id)_newSeparatorLineForWaypoint:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 orbitDiameter:(double)arg2 dialDiameter:(double)arg3 waypoints:(id)arg4 ;
@end
