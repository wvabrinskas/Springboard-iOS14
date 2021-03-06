/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:40 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/BSInvalidatable.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class SBWallpaperViewController, NSString;

@interface _SBWallpaperViewControllerAssertion : NSObject <BSInvalidatable, BSDescriptionProviding> {

	BOOL _invalidated;
	SBWallpaperViewController* _wallpaperViewController;
	long long _type;
	NSString* _reason;

}

@property (assign,getter=isInvalidated,nonatomic) BOOL invalidated;                                     //@synthesize invalidated=_invalidated - In the implementation block
@property (nonatomic,__weak,readonly) SBWallpaperViewController * wallpaperViewController;              //@synthesize wallpaperViewController=_wallpaperViewController - In the implementation block
@property (readonly) long long type;                                                                    //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * reason;                                                  //@synthesize reason=_reason - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)succinctDescription;
-(NSString *)reason;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)setInvalidated:(BOOL)arg1 ;
-(SBWallpaperViewController *)wallpaperViewController;
-(NSString *)description;
-(BOOL)isInvalidated;
-(long long)type;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)initWithWallpaperViewController:(id)arg1 type:(long long)arg2 reason:(id)arg3 ;
-(void)invalidate;
-(void)dealloc;
@end

