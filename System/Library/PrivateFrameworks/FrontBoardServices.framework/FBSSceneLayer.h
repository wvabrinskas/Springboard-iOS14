/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:09 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/BSXPCCoding.h>

@class CAContext, NSString;

@interface FBSSceneLayer : NSObject <BSXPCCoding> {

	CAContext* _context;
	double _level;

}

@property (getter=_context,nonatomic,readonly) CAContext * context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) long long alignment; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_unsafe_captureLevel;
-(id)init;
-(BOOL)isExternalSceneLayer;
-(id)initWithXPCDictionary:(id)arg1 ;
-(long long)alignment;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(BOOL)isCAContextLayer;
-(id)_initWithCAContext:(id)arg1 fallbackLevel:(double)arg2 ;
-(BOOL)isKeyboardProxyLayer;
-(id)_succinctDescription;
-(BOOL)isKeyboardLayer;
-(double)_unsafe_level;
-(id)_context;
-(void)dealloc;
@end
