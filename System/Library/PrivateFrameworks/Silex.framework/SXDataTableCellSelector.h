/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:01 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol SXDataTableCellSelector <SXDataTableSelector>
@property (nonatomic,readonly) unsigned long long evenRows; 
@property (nonatomic,readonly) unsigned long long oddRows; 
@property (nonatomic,readonly) unsigned long long evenColumns; 
@property (nonatomic,readonly) unsigned long long oddColumns; 
@required
-(unsigned long long)oddRows;
-(unsigned long long)evenRows;
-(unsigned long long)evenColumns;
-(unsigned long long)oddColumns;

@end

