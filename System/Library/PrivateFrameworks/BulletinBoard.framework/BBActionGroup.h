/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:55 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BulletinBoard/BBAction.h>

@class NSArray;

@interface BBActionGroup : BBAction {

	NSArray* _actions;

}

@property (nonatomic,copy) NSArray * actions;              //@synthesize actions=_actions - In the implementation block
+(id)actionGroupWithActions:(id)arg1 ;
-(void)setActions:(NSArray *)arg1 ;
-(unsigned long long)hash;
-(id)replacementObjectForCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)awakeAfterUsingCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)actions;
@end

