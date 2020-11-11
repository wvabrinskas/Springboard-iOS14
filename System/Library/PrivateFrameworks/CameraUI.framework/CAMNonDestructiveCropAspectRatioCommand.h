/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:43 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMCaptureCommand.h>

@interface CAMNonDestructiveCropAspectRatioCommand : CAMCaptureCommand {

	long long __aspectRatioCrop;

}

@property (nonatomic,readonly) long long _aspectRatioCrop;              //@synthesize _aspectRatioCrop=__aspectRatioCrop - In the implementation block
-(void)executeWithContext:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithSubcommands:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithAspectRatioCrop:(long long)arg1 ;
-(long long)_aspectRatioCrop;
@end
