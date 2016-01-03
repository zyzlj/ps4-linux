#ifndef _ASM_X86_MSI_H
#define _ASM_X86_MSI_H
#include <asm/hw_irq.h>

typedef struct irq_alloc_info msi_alloc_info_t;

void irq_msi_compose_msg(struct irq_data *data, struct msi_msg *msg);

#endif /* _ASM_X86_MSI_H */
