/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:48 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/AMSUIWebActionRunnable.h>

@class NSArray, NSString, AMSUIWebClientContext;

@interface AMSUIWebMediaAction : NSObject <AMSUIWebActionRunnable> {

	NSArray* _bundleIdentifiers;
	NSString* _clientIdentifier;
	NSString* _clientVersion;
	NSArray* _itemIdentifiers;
	NSArray* _includedResultKeys;
	long long _type;
	AMSUIWebClientContext* _context;

}

@property (nonatomic,retain) AMSUIWebClientContext * context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSArray * bundleIdentifiers;                  //@synthesize bundleIdentifiers=_bundleIdentifiers - In the implementation block
@property (nonatomic,retain) NSString * clientIdentifier;                  //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (nonatomic,retain) NSString * clientVersion;                     //@synthesize clientVersion=_clientVersion - In the implementation block
@property (nonatomic,retain) NSArray * itemIdentifiers;                    //@synthesize itemIdentifiers=_itemIdentifiers - In the implementation block
@property (nonatomic,retain) NSArray * includedResultKeys;                 //@synthesize includedResultKeys=_includedResultKeys - In the implementation block
@property (assign,nonatomic) long long type;                               //@synthesize type=_type - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setClientVersion:(NSString *)arg1 ;
-(NSArray *)itemIdentifiers;
-(void)setItemIdentifiers:(NSArray *)arg1 ;
-(NSString *)clientVersion;
-(void)setClientIdentifier:(NSString *)arg1 ;
-(NSString *)clientIdentifier;
-(void)setType:(long long)arg1 ;
-(NSArray *)bundleIdentifiers;
-(AMSUIWebClientContext *)context;
-(long long)type;
-(void)setContext:(AMSUIWebClientContext *)arg1 ;
-(void)setBundleIdentifiers:(NSArray *)arg1 ;
-(NSArray *)includedResultKeys;
-(void)setIncludedResultKeys:(NSArray *)arg1 ;
-(id)initWithJSObject:(id)arg1 context:(id)arg2 ;
-(id)runAction;
@end

