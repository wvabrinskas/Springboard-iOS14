/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:08 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface IPAPhotoAdjustmentPipeline : NSObject {

	NSString* _platform;
	unsigned long long _version;

}

@property (nonatomic,readonly) NSString * platform;                     //@synthesize platform=_platform - In the implementation block
@property (nonatomic,readonly) unsigned long long version;              //@synthesize version=_version - In the implementation block
+(id)current;
+(void)initialize;
+(id)pipelineForPlatform:(id)arg1 version:(unsigned long long)arg2 ;
+(id)pipelineForVersion:(unsigned long long)arg1 ;
+(id)pipelineFromString:(id)arg1 ;
-(NSString *)platform;
-(unsigned long long)hash;
-(unsigned long long)version;
-(id)debugDescription;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)string;
-(id)initWithPlatform:(id)arg1 version:(unsigned long long)arg2 ;
-(BOOL)isEqualToAdjustmentPipeline:(id)arg1 ;
@end
