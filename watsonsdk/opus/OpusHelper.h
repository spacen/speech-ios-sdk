/**
 * Copyright 2014 IBM Corp. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>

@interface OpusHelper : NSObject

@property (nonatomic,strong) dispatch_queue_t processingQueue;
@property (nonatomic) NSUInteger bitrate;

- (BOOL) createEncoder: (int) sampleRate;
- (NSData*) encode:(NSData*) pcmData frameSize:(int) frameSize;
- (NSData*) opusToPCM:(NSData*) oggopus;
@end
