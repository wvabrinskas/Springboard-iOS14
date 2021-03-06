/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:42 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NeutrinoCore/_NURenderResult.h>
#import <libobjc.A.dylib/NUImageDataResult.h>

@class NSDictionary, NUImageGeometry, NSString;

@interface _NUImageDataResult : _NURenderResult <NUImageDataResult> {

	NSDictionary* _data;
	NUImageGeometry* _geometry;

}

@property (copy) NSDictionary * data;                                //@synthesize data=_data - In the implementation block
@property (retain) NUImageGeometry * geometry;                       //@synthesize geometry=_geometry - In the implementation block
@property (readonly) id<NURenderStatistics> statistics; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setGeometry:(NUImageGeometry *)arg1 ;
-(void)setData:(NSDictionary *)arg1 ;
-(NSString *)description;
-(NSDictionary *)data;
-(NUImageGeometry *)geometry;
@end

