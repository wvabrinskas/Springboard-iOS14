/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:54 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/_UIStatusBarDisplayItemRelation.h>

@class NSArray;

@interface _UIStatusBarDisplayItemGroupRelation : _UIStatusBarDisplayItemRelation {

	BOOL _requiresAll;
	NSArray* _relations;

}

@property (nonatomic,retain) NSArray * relations;              //@synthesize relations=_relations - In the implementation block
@property (assign,nonatomic) BOOL requiresAll;                 //@synthesize requiresAll=_requiresAll - In the implementation block
-(void)setRelations:(NSArray *)arg1 ;
-(id)_ui_descriptionBuilder;
-(BOOL)isFulfilled;
-(id)type;
-(NSArray *)relations;
-(BOOL)requiresAll;
-(id)itemStates;
-(void)setRequiresAll:(BOOL)arg1 ;
@end
