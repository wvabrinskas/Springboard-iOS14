/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:15 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SAUITemplateBaseItem.h>

@class NSDictionary, SAUITemplateAttributedString;

@interface SAUITemplateLabel : SAUITemplateBaseItem

@property (nonatomic,copy) NSDictionary * attributedTexts; 
@property (nonatomic,retain) SAUITemplateAttributedString * text; 
+(id)label;
+(id)labelWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setText:(SAUITemplateAttributedString *)arg1 ;
-(id)groupIdentifier;
-(SAUITemplateAttributedString *)text;
-(id)encodedClassName;
-(NSDictionary *)attributedTexts;
-(void)setAttributedTexts:(NSDictionary *)arg1 ;
@end

