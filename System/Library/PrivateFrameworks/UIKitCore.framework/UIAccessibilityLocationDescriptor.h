/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:28 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <UIKitCore/UIKitCore-Structs.h>
@class UIView, NSAttributedString, NSString;

@interface UIAccessibilityLocationDescriptor : NSObject {

	UIView* _view;
	NSAttributedString* _attributedName;
	CGPoint _point;

}

@property (nonatomic,__weak,readonly) UIView * view;                             //@synthesize view=_view - In the implementation block
@property (nonatomic,readonly) CGPoint point;                                    //@synthesize point=_point - In the implementation block
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSAttributedString * attributedName;              //@synthesize attributedName=_attributedName - In the implementation block
-(UIView *)view;
-(unsigned long long)hash;
-(id)initWithAttributedName:(id)arg1 point:(CGPoint)arg2 inView:(id)arg3 ;
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(CGPoint)point;
-(id)initWithName:(id)arg1 point:(CGPoint)arg2 inView:(id)arg3 ;
-(NSAttributedString *)attributedName;
-(id)initWithName:(id)arg1 view:(id)arg2 ;
@end

