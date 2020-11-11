/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:20 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/REElementAction.h>

@interface REElementBlockAction : REElementAction {

	/*^block*/id _action;

}

@property (nonatomic,readonly) id action;              //@synthesize action=_action - In the implementation block
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithAction:(/*^block*/id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)action;
-(void)_performWithContext:(id)arg1 ;
@end
