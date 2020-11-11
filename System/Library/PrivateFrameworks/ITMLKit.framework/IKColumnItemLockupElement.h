/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:13 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ITMLKit/IKViewElement.h>

@class NSString, IKTextElement, IKOrdinalElement, IKImageElement, NSArray, IKTextBadgeAttachment, IKButtonElement, IKVideoElement;

@interface IKColumnItemLockupElement : IKViewElement

@property (nonatomic,copy,readonly) NSString * columnItemType; 
@property (nonatomic,retain,readonly) IKTextElement * title; 
@property (nonatomic,retain,readonly) IKTextElement * subtitle; 
@property (nonatomic,retain,readonly) IKTextElement * secondarySubtitle; 
@property (nonatomic,retain,readonly) IKTextElement * descriptionText; 
@property (nonatomic,retain,readonly) IKOrdinalElement * ordinal; 
@property (nonatomic,readonly) IKImageElement * image; 
@property (nonatomic,readonly) NSArray * images; 
@property (nonatomic,readonly) IKTextBadgeAttachment * titleBadge; 
@property (nonatomic,readonly) IKTextBadgeAttachment * subtitleBadge; 
@property (nonatomic,retain,readonly) IKButtonElement * button; 
@property (nonatomic,retain,readonly) IKVideoElement * video; 
@property (nonatomic,retain,readonly) NSArray * textElements; 
@property (nonatomic,readonly) BOOL hasSeparator; 
@property (nonatomic,readonly) BOOL isWatchlisted; 
@property (nonatomic,readonly) BOOL onlyVisibleOnColumnHighlight; 
-(IKButtonElement *)button;
-(IKVideoElement *)video;
-(NSArray *)images;
-(IKTextElement *)subtitle;
-(IKTextElement *)secondarySubtitle;
-(IKOrdinalElement *)ordinal;
-(IKImageElement *)image;
-(IKTextElement *)title;
-(IKTextElement *)descriptionText;
-(BOOL)hasSeparator;
-(NSString *)columnItemType;
-(void)_computeTitle:(id*)arg1 subtitle:(id*)arg2 secondarySubtitle:(id*)arg3 unstyledTextElements:(id*)arg4 ;
-(IKTextBadgeAttachment *)titleBadge;
-(IKTextBadgeAttachment *)subtitleBadge;
-(NSArray *)textElements;
-(BOOL)isWatchlisted;
-(BOOL)onlyVisibleOnColumnHighlight;
@end
