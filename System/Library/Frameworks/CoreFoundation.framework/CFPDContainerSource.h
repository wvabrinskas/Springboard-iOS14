/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:19 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/CFPDSource.h>

@interface CFPDContainerSource : CFPDSource {

	CFStringRef _containerPath;

}
-(CFStringRef)container;
-(id)initWithDomain:(CFStringRef)arg1 userName:(CFStringRef)arg2 container:(CFStringRef)arg3 byHost:(BOOL)arg4 managed:(BOOL)arg5 shmemIndex:(short)arg6 daemon:(id)arg7 ;
-(void)dealloc;
@end

