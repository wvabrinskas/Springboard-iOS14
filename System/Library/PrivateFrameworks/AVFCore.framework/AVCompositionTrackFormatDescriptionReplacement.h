/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:01 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVFCore/AVFCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface AVCompositionTrackFormatDescriptionReplacement : NSObject <NSSecureCoding> {

	opaqueCMFormatDescriptionRef _originalFormatDescription;
	opaqueCMFormatDescriptionRef _replacementFormatDescription;

}

@property (readonly) const opaqueCMFormatDescriptionRef originalFormatDescription; 
@property (readonly) const opaqueCMFormatDescriptionRef replacementFormatDescription; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(const opaqueCMFormatDescriptionRef)originalFormatDescription;
-(const opaqueCMFormatDescriptionRef)replacementFormatDescription;
-(id)initWithOriginalFormatDescription:(opaqueCMFormatDescriptionRef)arg1 andReplacementFormatDescription:(opaqueCMFormatDescriptionRef)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
@end
