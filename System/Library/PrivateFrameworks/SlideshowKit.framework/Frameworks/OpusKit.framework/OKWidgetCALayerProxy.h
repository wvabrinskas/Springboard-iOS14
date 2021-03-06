/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:41 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/OKSettingsSupport.h>

@class CALayer, OKWidgetMicaDocument, NSString;

@interface OKWidgetCALayerProxy : NSObject <OKSettingsSupport> {

	CALayer* _layer;
	OKWidgetMicaDocument* _widgetMicaDocument;

}

@property (nonatomic,retain,readonly) CALayer * layer;                               //@synthesize layer=_layer - In the implementation block
@property (assign,nonatomic) OKWidgetMicaDocument * widgetMicaDocument; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg1 ;
+(id)proxyForLayer:(id)arg1 ;
-(id)settingObjectForKey:(id)arg1 ;
-(id)init;
-(void)setUserSettingObject:(id)arg1 forKey:(id)arg2 ;
-(CALayer *)layer;
-(void)setSettingContents:(id)arg1 ;
-(id)initWithLayer:(id)arg1 ;
-(void)dealloc;
-(void)setWidgetMicaDocument:(OKWidgetMicaDocument *)arg1 ;
-(OKWidgetMicaDocument *)widgetMicaDocument;
@end

