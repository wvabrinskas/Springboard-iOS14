/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:57 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/WBSPasswordBreachCredentialSource.h>

@class NSArray;

@interface WBSPasswordBreachTestCredentialSource : NSObject <WBSPasswordBreachCredentialSource> {

	NSArray* _credentials;

}

@property (nonatomic,readonly) NSArray * credentials; 
-(id)initWithPasswords:(id)arg1 ;
-(NSArray *)credentials;
-(id)savedPasswordsForPersistentIdentifiers:(id)arg1 ;
@end

