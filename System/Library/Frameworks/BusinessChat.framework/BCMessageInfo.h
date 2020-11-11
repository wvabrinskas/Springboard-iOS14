/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:57 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/BusinessChat.framework/BusinessChat
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/BCDictionaryImageSerializable.h>

@class NSString, UIImage, NSDictionary;

@interface BCMessageInfo : NSObject <BSDescriptionProviding, BCDictionaryImageSerializable> {

	NSString* _title;
	NSString* _subtitle;
	NSString* _alternateTitle;
	NSString* _imageIdentifier;
	NSString* _imageDescription;
	UIImage* _image;
	NSString* __style;

}

@property (assign,nonatomic) NSString * _style;                             //@synthesize _style=__style - In the implementation block
@property (nonatomic,retain) NSString * title;                              //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * subtitle;                           //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,retain) NSString * alternateTitle;                     //@synthesize alternateTitle=_alternateTitle - In the implementation block
@property (nonatomic,retain) NSString * imageIdentifier;                    //@synthesize imageIdentifier=_imageIdentifier - In the implementation block
@property (nonatomic,retain) NSString * imageDescription;                   //@synthesize imageDescription=_imageDescription - In the implementation block
@property (nonatomic,readonly) NSString * style; 
@property (nonatomic,retain) UIImage * image;                               //@synthesize image=_image - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSDictionary * dictionaryValue; 
-(NSString *)_style;
-(id)succinctDescription;
-(void)set_style:(NSString *)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NSString *)subtitle;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)debugDescription;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(UIImage *)image;
-(NSString *)description;
-(NSString *)style;
-(NSString *)title;
-(NSDictionary *)dictionaryValue;
-(NSString *)imageIdentifier;
-(void)setTitle:(NSString *)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(NSString *)imageDescription;
-(void)setImageDescription:(NSString *)arg1 ;
-(id)succinctDescriptionBuilder;
-(void)setAlternateTitle:(NSString *)arg1 ;
-(NSString *)alternateTitle;
-(id)initWithTitle:(id)arg1 subtitle:(id)arg2 style:(id)arg3 alternateTitle:(id)arg4 imageIdentifier:(id)arg5 imageDescription:(id)arg6 ;
-(id)initWithDictionary:(id)arg1 imageDictionary:(id)arg2 ;
-(void)setImageIdentifier:(NSString *)arg1 ;
@end
