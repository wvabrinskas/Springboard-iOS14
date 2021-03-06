/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:08 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <iTunesStoreUI/SUScriptNativeObject.h>

@class UIBarButtonItem, SUDOMElement;

@interface SUScriptPopOverNativeObject : SUScriptNativeObject {

	BOOL _redisplayAfterRotation;
	UIBarButtonItem* _sourceButtonItem;
	SUDOMElement* _sourceDOMElement;

}

@property (nonatomic,retain) UIBarButtonItem * sourceButtonItem;              //@synthesize sourceButtonItem=_sourceButtonItem - In the implementation block
@property (nonatomic,retain) SUDOMElement * sourceDOMElement;                 //@synthesize sourceDOMElement=_sourceDOMElement - In the implementation block
-(void)dealloc;
-(void)setSourceButtonItem:(UIBarButtonItem *)arg1 ;
-(void)setSourceDOMElement:(SUDOMElement *)arg1 ;
-(void)destroyNativeObject;
-(void)_windowDidRotateNotification:(id)arg1 ;
-(void)_windowWillRotateNotification:(id)arg1 ;
-(void)setupNativeObject;
-(SUDOMElement *)sourceDOMElement;
-(BOOL)_isAffectedByWindowNotification:(id)arg1 ;
-(UIBarButtonItem *)sourceButtonItem;
@end

