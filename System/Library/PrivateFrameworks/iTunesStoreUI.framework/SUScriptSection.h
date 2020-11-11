/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:08 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <iTunesStoreUI/SUScriptObject.h>

@class NSString, SUScriptViewController;

@interface SUScriptSection : SUScriptObject {

	NSString* _badgeValue;
	NSString* _identifier;
	BOOL _transient;
	SUScriptViewController* _viewController;

}

@property (retain) NSString * badgeValue; 
@property (readonly) NSString * identifier; 
@property (readonly) BOOL transient; 
@property (readonly) SUScriptViewController * viewController; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(NSString *)badgeValue;
-(void)setBadgeValue:(NSString *)arg1 ;
-(SUScriptViewController *)viewController;
-(NSString *)identifier;
-(BOOL)transient;
-(id)_className;
-(id)attributeKeys;
-(void)dealloc;
-(id)scriptAttributeKeys;
-(void)setBadgeValue:(id)arg1 animated:(BOOL)arg2 blink:(BOOL)arg3 ;
-(id)initWithNativeSection:(id)arg1 ;
@end
