/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:32 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/InputContext.framework/InputContext
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/_ICLexiconSourcing.h>
#import <libobjc.A.dylib/_ICFeedbackAccepting.h>

@class _ICLexiconManager, PPContactStore, PPContactNameRecordLoadingDelegate, PPNamedEntityStore, PPNamedEntityRecordLoadingDelegate;

@interface _ICPortraitLexiconSource : NSObject <_ICLexiconSourcing, _ICFeedbackAccepting> {

	_ICLexiconManager* _manager;
	PPContactStore* _contactStore;
	PPContactNameRecordLoadingDelegate* _contactDelegate;
	PPNamedEntityStore* _namedEntityStore;
	PPNamedEntityRecordLoadingDelegate* _namedEntityDelegate;

}
-(void)provideFeedbackForString:(id)arg1 type:(unsigned char)arg2 style:(unsigned char)arg3 ;
-(void)warmUp;
-(void)hibernate;
-(void)_reloadNamedEntityDataAfterReset;
-(id)init;
-(id)_makeContactDelegate;
-(id)_makePPNamedEntityStore;
-(void)startLoadingWithManager:(id)arg1 ;
-(id)_makeNamedEntityDelegate;
@end
