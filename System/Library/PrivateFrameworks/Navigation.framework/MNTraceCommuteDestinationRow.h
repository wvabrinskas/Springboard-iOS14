/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:51 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, GEOComposedWaypoint;

@interface MNTraceCommuteDestinationRow : NSObject {

	unsigned long long _destinationID;
	NSString* _name;
	GEOComposedWaypoint* _waypoint;

}

@property (assign,nonatomic) unsigned long long destinationID;              //@synthesize destinationID=_destinationID - In the implementation block
@property (nonatomic,copy) NSString * name;                                 //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) GEOComposedWaypoint * waypoint;                //@synthesize waypoint=_waypoint - In the implementation block
-(NSString *)name;
-(unsigned long long)destinationID;
-(void)setDestinationID:(unsigned long long)arg1 ;
-(void)setWaypoint:(GEOComposedWaypoint *)arg1 ;
-(GEOComposedWaypoint *)waypoint;
-(void)setName:(NSString *)arg1 ;
@end

