/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:28 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol NSObject;
@class NSUUID, UITextRange;

@interface UIAccessibilityCustomRotorItemResult : NSObject {

	NSUUID* uuid;
	id<NSObject> _targetElement;
	UITextRange* _targetRange;

}

@property (nonatomic,retain) NSUUID * uuid; 
@property (assign,nonatomic,__weak) id<NSObject> targetElement;              //@synthesize targetElement=_targetElement - In the implementation block
@property (nonatomic,retain) UITextRange * targetRange;                      //@synthesize targetRange=_targetRange - In the implementation block
-(void)setUuid:(NSUUID *)arg1 ;
-(id)initWithTargetElement:(id)arg1 targetRange:(id)arg2 ;
-(UITextRange *)targetRange;
-(id<NSObject>)targetElement;
-(NSUUID *)uuid;
-(void)setTargetRange:(UITextRange *)arg1 ;
-(void)setTargetElement:(id<NSObject>)arg1 ;
@end

