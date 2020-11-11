/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:31 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MapsSync.framework/MapsSync
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MapsSync/MapsSyncManagedHistoryItem.h>

@class NSData, NSString;

@interface MapsSyncManagedHistorySearchItem : MapsSyncManagedHistoryItem

@property (copy,nonatomic) NSData * geoMapRegion; 
@property (copy,nonatomic) NSString * language; 
@property (copy,nonatomic) NSString * locationDisplay; 
@property (copy,nonatomic) NSString * query; 
-(id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2 ;
@end
