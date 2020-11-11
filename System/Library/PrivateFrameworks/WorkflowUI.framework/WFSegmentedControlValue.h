/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:16 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, UIImage;

@interface WFSegmentedControlValue : NSObject {

	NSString* _displayName;
	UIImage* _image;
	id _representedObject;

}

@property (nonatomic,readonly) NSString * displayName;              //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,readonly) UIImage * image;                     //@synthesize image=_image - In the implementation block
@property (nonatomic,readonly) id representedObject;                //@synthesize representedObject=_representedObject - In the implementation block
+(id)valueWithDisplayName:(id)arg1 representedObject:(id)arg2 ;
+(id)valueWithDisplayName:(id)arg1 ;
+(id)valueWithImage:(id)arg1 ;
+(id)valueWithImage:(id)arg1 representedObject:(id)arg2 ;
-(UIImage *)image;
-(id)representedObject;
-(NSString *)displayName;
-(id)initWithDisplayName:(id)arg1 image:(id)arg2 representedObject:(id)arg3 ;
@end
