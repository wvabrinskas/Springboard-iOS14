/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:28 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class UIImage, NSAttributedString, NSString;

@interface UIAccessibilityCustomAction : NSObject {

	UIImage* _image;
	NSAttributedString* _attributedName;
	id _target;
	SEL _selector;
	/*^block*/id _actionHandler;

}

@property (nonatomic,copy) NSString * name; 
@property (nonatomic,retain) UIImage * image;                                //@synthesize image=_image - In the implementation block
@property (nonatomic,copy) NSAttributedString * attributedName;              //@synthesize attributedName=_attributedName - In the implementation block
@property (assign,nonatomic,__weak) id target;                               //@synthesize target=_target - In the implementation block
@property (assign,nonatomic) SEL selector;                                   //@synthesize selector=_selector - In the implementation block
@property (nonatomic,copy) id actionHandler;                                 //@synthesize actionHandler=_actionHandler - In the implementation block
-(id)target;
-(void)setSelector:(SEL)arg1 ;
-(id)init;
-(void)setActionHandler:(id)arg1 ;
-(id)initWithAttributedName:(id)arg1 image:(id)arg2 target:(id)arg3 selector:(SEL)arg4 ;
-(id)initWithAttributedName:(id)arg1 image:(id)arg2 actionHandler:(/*^block*/id)arg3 ;
-(id)initWithAttributedName:(id)arg1 target:(id)arg2 selector:(SEL)arg3 ;
-(void)setImage:(UIImage *)arg1 ;
-(id)initWithAttributedName:(id)arg1 actionHandler:(/*^block*/id)arg2 ;
-(id)initWithName:(id)arg1 image:(id)arg2 actionHandler:(/*^block*/id)arg3 ;
-(UIImage *)image;
-(NSString *)name;
-(void)setTarget:(id)arg1 ;
-(id)initWithName:(id)arg1 image:(id)arg2 target:(id)arg3 selector:(SEL)arg4 ;
-(id)actionHandler;
-(id)initWithName:(id)arg1 target:(id)arg2 selector:(SEL)arg3 ;
-(id)initWithName:(id)arg1 actionHandler:(/*^block*/id)arg2 ;
-(SEL)selector;
-(NSAttributedString *)attributedName;
-(void)setAttributedName:(NSAttributedString *)arg1 ;
-(void)setName:(NSString *)arg1 ;
@end
