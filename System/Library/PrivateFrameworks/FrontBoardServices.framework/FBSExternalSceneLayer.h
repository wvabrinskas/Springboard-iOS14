/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:09 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <FrontBoardServices/FBSSceneLayer.h>

@class NSString;

@interface FBSExternalSceneLayer : FBSSceneLayer {

	NSString* _sceneID;

}

@property (nonatomic,copy,readonly) NSString * sceneID;              //@synthesize sceneID=_sceneID - In the implementation block
-(unsigned long long)hash;
-(id)_initWithCAContext:(id)arg1 fallbackLevel:(double)arg2 sceneID:(id)arg3 ;
-(NSString *)sceneID;
-(BOOL)isExternalSceneLayer;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithExternalSceneID:(id)arg1 level:(double)arg2 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(long long)alignment;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)_succinctDescription;
-(id)initWithExternalSceneID:(id)arg1 trackingContext:(id)arg2 ;
@end
