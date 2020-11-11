/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:41 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class IKViewElement, IKImageElement, IKTextElement, NSArray, UIColor, TVImageProxy;

@interface VUIPopoverGroup : NSObject {

	IKViewElement* _groupElement;
	IKImageElement* _downImageElement;
	IKImageElement* _upImageElement;
	IKTextElement* _titleElement;
	NSArray* _groupOptions;
	UIColor* _highlightColor;

}

@property (nonatomic,readonly) IKViewElement * groupElement;                   //@synthesize groupElement=_groupElement - In the implementation block
@property (nonatomic,readonly) IKImageElement * downImageElement;              //@synthesize downImageElement=_downImageElement - In the implementation block
@property (nonatomic,readonly) IKImageElement * upImageElement;                //@synthesize upImageElement=_upImageElement - In the implementation block
@property (nonatomic,readonly) IKTextElement * titleElement;                   //@synthesize titleElement=_titleElement - In the implementation block
@property (nonatomic,readonly) TVImageProxy * downImageProxy; 
@property (nonatomic,readonly) TVImageProxy * upImageProxy; 
@property (nonatomic,copy,readonly) NSArray * groupOptions;                    //@synthesize groupOptions=_groupOptions - In the implementation block
@property (nonatomic,readonly) UIColor * highlightColor;                       //@synthesize highlightColor=_highlightColor - In the implementation block
-(id)init;
-(NSArray *)groupOptions;
-(id)_init;
-(UIColor *)highlightColor;
-(IKTextElement *)titleElement;
-(void)_populateWithElement:(id)arg1 ;
-(id)initWithViewElement:(id)arg1 ;
-(IKViewElement *)groupElement;
-(IKImageElement *)downImageElement;
-(IKImageElement *)upImageElement;
-(TVImageProxy *)downImageProxy;
-(TVImageProxy *)upImageProxy;
@end
