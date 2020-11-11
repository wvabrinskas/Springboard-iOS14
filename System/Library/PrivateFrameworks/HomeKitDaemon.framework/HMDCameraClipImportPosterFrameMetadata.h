/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:25 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface HMDCameraClipImportPosterFrameMetadata : NSObject {

	NSString* _resourcePath;
	double _offset;
	unsigned long long _width;
	unsigned long long _height;

}

@property (copy,readonly) NSString * resourcePath;              //@synthesize resourcePath=_resourcePath - In the implementation block
@property (readonly) double offset;                             //@synthesize offset=_offset - In the implementation block
@property (readonly) unsigned long long width;                  //@synthesize width=_width - In the implementation block
@property (readonly) unsigned long long height;                 //@synthesize height=_height - In the implementation block
-(unsigned long long)height;
-(unsigned long long)width;
-(double)offset;
-(NSString *)resourcePath;
-(id)initWithPosterFrameMetadata:(id)arg1 ;
@end
