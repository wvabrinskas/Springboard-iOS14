/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:11 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/AceObject.h>
#import <SAObjects/SASTActionableTemplateItem.h>

@class NSArray, SAUINanoImageResource, NSString, SAUIDecoratedText;

@interface SASTColumnDataListItem : AceObject <SASTActionableTemplateItem>

@property (nonatomic,retain) id<SASTTemplateAction> action; 
@property (nonatomic,copy) NSArray * decoratedRows; 
@property (nonatomic,retain) SAUINanoImageResource * imageResource; 
@property (nonatomic,copy) NSString * rowLayout; 
@property (nonatomic,retain) SAUIDecoratedText * title; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)columnDataListItem;
+(id)columnDataListItemWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setAction:(id<SASTTemplateAction>)arg1 ;
-(SAUINanoImageResource *)imageResource;
-(void)setImageResource:(SAUINanoImageResource *)arg1 ;
-(SAUIDecoratedText *)title;
-(NSArray *)decoratedRows;
-(void)setDecoratedRows:(NSArray *)arg1 ;
-(NSString *)rowLayout;
-(void)setRowLayout:(NSString *)arg1 ;
-(void)setTitle:(SAUIDecoratedText *)arg1 ;
-(id<SASTTemplateAction>)action;
@end
