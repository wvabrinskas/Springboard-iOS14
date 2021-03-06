/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:31 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MapsSync.framework/MapsSync
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MapsSync/MapsSync.MapsSyncHistoryItem.h>

@class NSString, GEOStorageRouteRequestStorage;

@interface MapsSync.MapsSyncHistoryDirectionsItem : MapsSync.MapsSyncHistoryItem {

	 _navigationInterrupted;
	 _routeRequestStorage;

}

@property (readonly,nonatomic) NSString * description; 
@property (readonly,nonatomic) BOOL navigationInterrupted; 
@property (readonly,nonatomic) GEOStorageRouteRequestStorage * routeRequestStorage; 
-(id)initWithObject:(id)arg1 ;
-(void)setPropertiesWithObject:(id)arg1 ;
-(GEOStorageRouteRequestStorage *)routeRequestStorage;
-(BOOL)navigationInterrupted;
-(Class)mutableObjectClass;
-(void)addEditWithBlock:(/*^block*/id)arg1 ;
-(Class)managedObjectClass;
-(NSString *)description;
-(BOOL)isEqual:(id)arg1 ;
@end

