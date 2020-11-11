/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:29 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AccessibilitySharedSupport.framework/AccessibilitySharedSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AccessibilitySharedSupport/AXSSMotionTrackingInput.h>

@class NSString;

@interface AXSSMotionTrackingCameraInput : AXSSMotionTrackingInput {

	BOOL _isBuiltIn;
	NSString* _name;
	NSString* _captureDeviceUniqueID;

}

@property (nonatomic,copy) NSString * captureDeviceUniqueID;              //@synthesize captureDeviceUniqueID=_captureDeviceUniqueID - In the implementation block
@property (nonatomic,copy) NSString * name;                               //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) BOOL isBuiltIn;                              //@synthesize isBuiltIn=_isBuiltIn - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)captureDeviceForMotionTrackingInput:(id)arg1 ;
+(id)motionTrackingCameraInputWithAVCaptureDevice:(id)arg1 ;
-(BOOL)isBuiltIn;
-(BOOL)isCamera;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)name;
-(void)setIsBuiltIn:(BOOL)arg1 ;
-(id)description;
-(id)plistDictionary;
-(id)initWithPlistDictionary:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id)uniqueIdentifier;
-(unsigned long long)trackingType;
-(BOOL)supportsExpressions;
-(NSString *)captureDeviceUniqueID;
-(id)initWithCaptureDeviceUniqueID:(id)arg1 name:(id)arg2 isBuiltIn:(BOOL)arg3 ;
-(void)setCaptureDeviceUniqueID:(NSString *)arg1 ;
@end
