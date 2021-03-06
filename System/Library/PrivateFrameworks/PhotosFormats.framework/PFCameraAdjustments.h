/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:34 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosFormats/PhotosFormats-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, AVApplePortraitMetadata;

@interface PFCameraAdjustments : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	NSString* _effectFilterName;
	NSString* _portraitEffectFilterName;
	AVApplePortraitMetadata* _portraitMetadata;
	BOOL _depthEnabled;
	CGRect _cropRect;

}

@property (nonatomic,copy,readonly) NSString * effectFilterName;                        //@synthesize effectFilterName=_effectFilterName - In the implementation block
@property (nonatomic,copy,readonly) NSString * portraitEffectFilterName;                //@synthesize portraitEffectFilterName=_portraitEffectFilterName - In the implementation block
@property (nonatomic,readonly) AVApplePortraitMetadata * portraitMetadata;              //@synthesize portraitMetadata=_portraitMetadata - In the implementation block
@property (getter=isDepthEnabled,nonatomic,readonly) BOOL depthEnabled;                 //@synthesize depthEnabled=_depthEnabled - In the implementation block
@property (nonatomic,readonly) CGRect cropRect;                                         //@synthesize cropRect=_cropRect - In the implementation block
@property (nonatomic,readonly) BOOL hasCrop; 
+(BOOL)supportsSecureCoding;
-(BOOL)hasCrop;
-(void)encodeWithCoder:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(CGRect)cropRect;
-(id)initWithAdjustments:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isDepthEnabled;
-(NSString *)portraitEffectFilterName;
-(NSString *)effectFilterName;
-(AVApplePortraitMetadata *)portraitMetadata;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithEffectFilter:(id)arg1 cropRect:(CGRect)arg2 ;
@end

