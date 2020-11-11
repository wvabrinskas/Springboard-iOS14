/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:58 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSDate;


@protocol PXConfigurableFeedSectionInfosManager
@property (assign,nonatomic) long long entryFilter; 
@property (nonatomic,retain) NSDate * earliestDate; 
@property (assign,nonatomic) unsigned long long fetchLimit; 
@required
-(long long)entryFilter;
-(void)setEarliestDate:(id)arg1;
-(unsigned long long)fetchLimit;
-(void)setEntryFilter:(long long)arg1;
-(NSDate *)earliestDate;
-(void)setFetchLimit:(unsigned long long)arg1;

@end
