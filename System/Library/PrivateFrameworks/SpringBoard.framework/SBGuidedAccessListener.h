/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:27 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface SBGuidedAccessListener : NSObject {

	BOOL _isGuidedAccessActive;

}

@property (assign,nonatomic) BOOL isGuidedAccessActive;              //@synthesize isGuidedAccessActive=_isGuidedAccessActive - In the implementation block
+(id)sharedGuidedAccessListener;
-(BOOL)isGuidedAccessActive;
-(id)init;
-(void)setIsGuidedAccessActive:(BOOL)arg1 ;
-(void)guidedAccessWasActivated;
-(void)guidedAccessWasDeactivated;
@end
