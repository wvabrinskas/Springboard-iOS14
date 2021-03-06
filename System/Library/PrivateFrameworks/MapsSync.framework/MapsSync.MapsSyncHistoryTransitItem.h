/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:31 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MapsSync.framework/MapsSync
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MapsSync/MapsSync.MapsSyncHistoryItem.h>

@class NSString, NSData;

@interface MapsSync.MapsSyncHistoryTransitItem : MapsSync.MapsSyncHistoryItem {

	 _transitLineStorage;
	 _muid;

}

@property (readonly,nonatomic) NSString * description; 
@property (readonly,nonatomic) NSData * transitLineItemStorageData; 
@property (readonly,nonatomic) unsigned long long muid; 
-(unsigned long long)muid;
-(id)initWithObject:(id)arg1 ;
-(void)setPropertiesWithObject:(id)arg1 ;
-(NSData *)transitLineItemStorageData;
-(Class)mutableObjectClass;
-(void)addEditWithBlock:(/*^block*/id)arg1 ;
-(Class)managedObjectClass;
-(NSString *)description;
-(BOOL)isEqual:(id)arg1 ;
@end

