/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:31 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MobileMailUI.framework/MobileMailUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/EFLoggable.h>

@class NSString;

@interface ContentItemMarkupGenerator : NSObject <EFLoggable>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)log;
+(BOOL)isDisplayableInlineContentItem:(id)arg1 ;
+(id)attachmentElementMarkupStringForContentItem:(id)arg1 ;
+(BOOL)isDisplayableImageContentItem:(id)arg1 ;
+(BOOL)isDisplayableSinglePagePDFContentItem:(id)arg1 ;
+(id)markupStringForDisplayForContentItem:(id)arg1 ;
@end
