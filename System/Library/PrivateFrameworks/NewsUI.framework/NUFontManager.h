/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:27 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NUFontRegistration.h>

@protocol OS_dispatch_queue;
@class NSObject, NSCountedSet, NSString;

@interface NUFontManager : NSObject <NUFontRegistration> {

	NSObject*<OS_dispatch_queue> _registrationQueue;
	NSCountedSet* _referenceCounts;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> registrationQueue;              //@synthesize registrationQueue=_registrationQueue - In the implementation block
@property (nonatomic,readonly) NSCountedSet * referenceCounts;                              //@synthesize referenceCounts=_referenceCounts - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)unregisterFontAtURL:(id)arg1 error:(id*)arg2 ;
-(NSObject*<OS_dispatch_queue>)registrationQueue;
-(unsigned long long)referenceCountForFontWithURL:(id)arg1 ;
-(void)increaseReferenceCountForFontWithURL:(id)arg1 ;
-(id)init;
-(NSCountedSet *)referenceCounts;
-(void)unregisterFontWithURL:(id)arg1 ;
-(void)decreaseReferenceCountForFontWithURL:(id)arg1 ;
-(BOOL)shouldUnregisterFontWithURL:(id)arg1 ;
-(BOOL)registerFontWithURL:(id)arg1 error:(id*)arg2 ;
@end

